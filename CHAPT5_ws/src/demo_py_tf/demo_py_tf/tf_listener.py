import rclpy.time
import rclpy
from rclpy.node import Node
import transform3d
from tf2_ros import TransformListener,Buffer # 坐标监听器
from tf_transformations import euler_from_quaternion # 四元数转欧拉角
import math # 角度转弧度

class TfBroadcaster(Node):
    def __init__(self):
        super().__init__("tf_broadcaster")
        self.buffer = Buffer()
        self.listener = TransformListener(self.buffer,self)
        self.timer = self.create_timer(0.01, self.get_transform)

    def get_transform(self):
        """
        实时查询
        """
        try:
            result = self.buffer.lookup_transform("camera_link","bottle_link",
                rclpy.time.Time(seconds=0.0),rclpy.time.Duration(seconds = 1.0))
            transform = result.transform
            self.get_logger().info(f"平移： {transform.translation}")
            self.get_logger().info(f"旋转： {transform.rotation}")
            rotation_eluer = euler_from_quaternion([
                transform.rotation.x,
                transform.rotation.y,
                transform.rotation.z,
                transform.rotation.w])
            self.get_logger().info(f"旋转RPY: {rotation_eluer}")
        except Exception as e:
            self.get_logger().warn(f"获取坐标失败{e}")
            self.get_logger().info("查询失败")


def main():
    rclpy.init()
    tf_broadcaster = TfBroadcaster()
    rclpy.spin(tf_broadcaster)
    rclpy.shutdown()
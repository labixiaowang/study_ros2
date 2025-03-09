import rclpy
from rclpy.node import Node
from tf2_ros import StaticTransformBroadcaster  # 静态坐标发布器
from geometry_msgs.msg import TransformStamped # 位姿消息
from tf_transformations import quaternion_from_euler # 欧拉角转四元数
import math # 角度转弧度

class StaticTfBroadcaster(Node):
    def __init__(self):
        super().__init__("static_tf_broadcaster")
        self.static_broadcaster = StaticTransformBroadcaster(self)
        self.publish_static_tf()

    def publish_static_tf(self):
        """
        发布静态坐标变换
        """
        transform = TransformStamped()
        transform.header.frame_id = "base_link"
        transform.header.stamp  =self.get_clock().now().to_msg()
        transform.child_frame_id = "camera_link"

        transform.transform.translation.x = 0.1
        transform.transform.translation.y = 0.0
        transform.transform.translation.z = 0.2
        # 欧拉角转四元数
        q = quaternion_from_euler(math.radians(180),0,0)
        transform.transform.rotation.x = q[0]
        transform.transform.rotation.y = q[1]
        transform.transform.rotation.z = q[2]
        transform.transform.rotation.w = q[3]

        # 发布静态坐标变换
        self.static_broadcaster.sendTransform(transform)
        self.get_logger().info(f"Publish static tf {transform}")


def main():
    rclpy.init()
    static_tf_broadcaster = StaticTfBroadcaster()
    rclpy.spin(static_tf_broadcaster)
    rclpy.shutdown()
import rclpy
from rclpy.node import Node
class Noval_PubNode(Node):
    def __init__(self,node_name):
        super().__init__(node_name)
        self.get_logger().info(f"{node_name} has been started")


def main():
    rclpy.init()
    noval_pub_node = Noval_PubNode("noval_pub")
    rclpy.spin(noval_pub_node)
    rclpy.shutdown()
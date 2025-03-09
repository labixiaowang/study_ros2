import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/wxx/study_ros2/CHAPT5_ws/install/demo_py_tf'

import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/wxx/study_ros2/CHAPT2_ws/install/service_pkg_py'

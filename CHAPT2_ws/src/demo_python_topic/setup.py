from setuptools import setup

package_name = 'demo_python_topic'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='wxx',
    maintainer_email='wxx@todo.todo',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "topic_publisher = demo_python_topic.topic_pub:main",
            "topic_subscribe = demo_python_topic.topic_sub:main"
        ],
    },
)

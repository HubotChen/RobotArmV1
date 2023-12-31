from setuptools import find_packages, setup

package_name = 'robot_controller'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='hubot',
    maintainer_email='chen.hub@northeastern.edu',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "test_node = robot_controller.test_node:main",
            "test_subscriber = robot_controller.test_subscriber:main",
            "trajectory_planner = robot_controller.trajectory_planner:main",
            "user_interface = robot_controller.user_interface:main",
            "plan_executor = robot_controller.plan_executor:main"
        ],
    },
)

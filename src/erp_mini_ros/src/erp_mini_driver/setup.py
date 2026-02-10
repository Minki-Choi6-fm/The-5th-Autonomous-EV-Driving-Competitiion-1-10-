from setuptools import find_packages, setup

package_name = 'erp_mini_driver'

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
    maintainer='fmp',
    maintainer_email='mc86757@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'driver_node = erp_mini_driver.driver_node:main',
            'drive_controller = erp_mini_driver.drive_controller:main',
        ],
    },
)

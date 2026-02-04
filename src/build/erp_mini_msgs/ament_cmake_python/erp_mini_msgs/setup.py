from setuptools import find_packages
from setuptools import setup

setup(
    name='erp_mini_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('erp_mini_msgs', 'erp_mini_msgs.*')),
)

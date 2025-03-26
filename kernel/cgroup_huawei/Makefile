#
# Makefile for the linux kernel cgroup feature.
#

obj-$(CONFIG_CGROUP_IOLIMIT) += cgroup_io_limit.o
obj-$(CONFIG_HW_CGROUP_PIDS) += cgroup_pids.o

obj-$(CONFIG_HW_CGROUP_WORKINGSET) += cgroup_workingset.o \
				cgroup_workingset_backup.o \
				cgroup_workingset_collect.o \
				cgroup_workingset_preread.o

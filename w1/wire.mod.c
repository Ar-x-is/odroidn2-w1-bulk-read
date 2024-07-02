#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe0d6e1c5, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x5e65200a, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xb73959bf, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xea5206a0, __VMLINUX_SYMBOL_STR(cn_add_callback) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x890bc8f2, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x4b316aff, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x1b17e06c, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0xda21b29f, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xb678975d, __VMLINUX_SYMBOL_STR(irq_trace_stop) },
	{ 0x479c6a36, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8de9af05, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x3f787b55, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xff5a8cfe, __VMLINUX_SYMBOL_STR(cn_del_callback) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8bb07c09, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0xf5496a32, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfac18576, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x3fb94f8b, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x9dedba30, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x7486f5fe, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xfd8323a3, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf1969a8e, __VMLINUX_SYMBOL_STR(__usecs_to_jiffies) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0xe9610551, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0xc8de802f, __VMLINUX_SYMBOL_STR(cn_netlink_send) },
	{ 0x7fe305ce, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0xc1278a00, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x26932923, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x8114467b, __VMLINUX_SYMBOL_STR(cn_netlink_send_mult) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd09c2857, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xbf1e8460, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe5cc12f5, __VMLINUX_SYMBOL_STR(sysfs_create_groups) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0xf7b41793, __VMLINUX_SYMBOL_STR(sysfs_remove_groups) },
	{ 0x868ae75b, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x216daeee, __VMLINUX_SYMBOL_STR(irq_trace_start) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf730bec3, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0x6c07d933, __VMLINUX_SYMBOL_STR(add_uevent_var) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


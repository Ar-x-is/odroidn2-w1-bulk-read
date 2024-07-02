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
	{ 0x4b316aff, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x8e00f648, __VMLINUX_SYMBOL_STR(w1_unregister_family) },
	{ 0xc51dce5a, __VMLINUX_SYMBOL_STR(w1_register_family) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfd8323a3, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb73959bf, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x18516210, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xbf1e8460, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x74d28a77, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x10caff2e, __VMLINUX_SYMBOL_STR(w1_touch_bit) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0xc1278a00, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xca15d5bf, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x7c2f2afb, __VMLINUX_SYMBOL_STR(w1_calc_crc8) },
	{ 0x817694ba, __VMLINUX_SYMBOL_STR(w1_read_block) },
	{ 0x4b73e9b4, __VMLINUX_SYMBOL_STR(w1_read_8) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9e2ccf5d, __VMLINUX_SYMBOL_STR(w1_next_pullup) },
	{ 0x479c6a36, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5aedcb62, __VMLINUX_SYMBOL_STR(w1_write_8) },
	{ 0x8e055a8c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x97d96128, __VMLINUX_SYMBOL_STR(w1_write_block) },
	{ 0x8b191b1, __VMLINUX_SYMBOL_STR(w1_reset_bus) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";


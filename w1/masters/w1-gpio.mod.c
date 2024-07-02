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
	{ 0x72e8277f, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xa698a5dd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9c058e56, __VMLINUX_SYMBOL_STR(of_root) },
	{ 0x4354d97f, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0xf5496a32, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbbb58531, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0xf3c3150, __VMLINUX_SYMBOL_STR(w1_add_master_device) },
	{ 0xf92718ce, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0x11aba870, __VMLINUX_SYMBOL_STR(devm_gpio_request) },
	{ 0x4c93d19f, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x6cf691f4, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x3572ffc4, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xe6bbed04, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0xfbd8f08b, __VMLINUX_SYMBOL_STR(w1_remove_master_device) },
	{ 0x7350f793, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xf7d4504f, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";

MODULE_ALIAS("of:N*T*Cw1-gpio");
MODULE_ALIAS("of:N*T*Cw1-gpioC*");

cmd_drivers/w1/wire.ko := ld -EL -r  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds --build-id  -o drivers/w1/wire.ko drivers/w1/wire.o drivers/w1/wire.mod.o ;  true

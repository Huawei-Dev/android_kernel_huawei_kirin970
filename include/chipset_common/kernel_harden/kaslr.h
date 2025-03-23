#ifndef KASLR_H
#define KASLR_H

#define set_init_stack_nx(x)
#define set_task_stack_nx(x)

#define set_init_stack_nx(x)

#ifndef CONFIG_HUAWEI_KERNEL_MODULE_RANDOMIZE
#define get_module_load_offset()
#else
extern unsigned long get_module_load_offset(void);
#endif

#endif

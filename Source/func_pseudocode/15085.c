_task_info
kern_return_t __cdecl task_info(
        task_name_t target_task,
        task_flavor_t flavor,
        task_info_t task_info_out,
        mach_msg_type_number_t *task_info_outCnt)
{
  return _task_info(target_task, flavor, task_info_out, task_info_outCnt);
}
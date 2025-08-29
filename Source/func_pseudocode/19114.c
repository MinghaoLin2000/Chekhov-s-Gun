_mach_port_mod_refs
kern_return_t __cdecl mach_port_mod_refs(
        ipc_space_t task,
        mach_port_name_t name,
        mach_port_right_t right,
        mach_port_delta_t delta)
{
  return _mach_port_mod_refs(task, name, right, delta);
}
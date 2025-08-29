_mach_port_get_refs
kern_return_t __cdecl mach_port_get_refs(
        ipc_space_t task,
        mach_port_name_t name,
        mach_port_right_t right,
        mach_port_urefs_t *refs)
{
  return _mach_port_get_refs(task, name, right, refs);
}
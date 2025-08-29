__os_activity_create
os_activity_t __cdecl _os_activity_create(
        void *dso,
        const char *description,
        os_activity_t activity,
        os_activity_flag_t flags)
{
  return __os_activity_create(dso, description, activity, flags);
}
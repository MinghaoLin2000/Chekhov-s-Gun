____ZL24isProbGuardMallocEnabledv_block_invoke
void __cdecl ___ZL24isProbGuardMallocEnabledv_block_invoke(id a1)
{
  __int64 v1; // x21
  const char *zone_name; // x0

  if ( malloc_num_zones >= 1 )
  {
    v1 = 0LL;
    while ( 1 )
    {
      zone_name = malloc_get_zone_name(*(malloc_zone_t **)(malloc_zones + 8 * v1));
      if ( !strncmp(zone_name, "ProbGuardMallocZone", 0x14uLL) )
        break;
      if ( ++v1 >= malloc_num_zones )
        return;
    }
    isProbGuardMallocEnabled(void)::result = 1;
  }
}
_piston_smb1_next_mid
__int64 __fastcall piston_smb1_next_mid(__int64 a1)
{
  pthread_mutex_t *v2; // x20
  __int64 v3; // x21

  v2 = (pthread_mutex_t *)(a1 + 2496);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 2496));
  v3 = *(unsigned __int16 *)(a1 + 136);
  *(_WORD *)(a1 + 136) = v3 + 1;
  pthread_mutex_unlock(v2);
  return v3;
}
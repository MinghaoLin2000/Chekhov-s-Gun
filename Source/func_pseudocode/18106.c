_smb2_curr_credits
__int64 __fastcall smb2_curr_credits(__int64 a1)
{
  pthread_mutex_t *v2; // x20
  __int64 v3; // x19

  v2 = (pthread_mutex_t *)(a1 + 2496);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 2496));
  v3 = *(unsigned int *)(a1 + 256);
  pthread_mutex_unlock(v2);
  return v3;
}
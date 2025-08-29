-[job_spool_client_t FitToPage]
bool __cdecl -[job_spool_client_t FitToPage](job_spool_client_t *self, SEL a2)
{
  void *v2; // x0
  void *v3; // x19
  unsigned __int8 v4; // w20

  v2 = objc_retainAutoreleasedReturnValue(-[PKPrintSettings pageScale](self->_printSettings, "pageScale"));
  v3 = v2;
  if ( v2 )
  {
    if ( ((unsigned int)objc_msgSend(v2, "isEqualToString:", PKPageScaleDown) & 1) != 0 )
      v4 = 1;
    else
      v4 = (unsigned __int8)objc_msgSend(v3, "isEqualToString:", PKPageScaleUpAndDown);
  }
  else
  {
    v4 = 0;
  }
  objc_release(v3);
  return v4;
}
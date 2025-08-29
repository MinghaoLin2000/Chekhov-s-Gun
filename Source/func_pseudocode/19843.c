-[job_spool_client_t AttributeFidelity]
bool __cdecl -[job_spool_client_t AttributeFidelity](job_spool_client_t *self, SEL a2)
{
  void *v2; // x0
  void *v3; // x19
  bool v4; // w20

  v2 = objc_retainAutoreleasedReturnValue(-[PKPrintSettings pageScale](self->_printSettings, "pageScale"));
  v3 = v2;
  v4 = v2
    && (((unsigned int)objc_msgSend(v2, "isEqualToString:", PKPageScaleUpAndDown) & 1) != 0
     || (unsigned int)objc_msgSend(v3, "isEqualToString:", PKPageScaleOff));
  objc_release(v3);
  return v4;
}
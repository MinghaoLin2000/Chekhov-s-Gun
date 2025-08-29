-[lite_job_t .cxx_destruct]
void __cdecl -[lite_job_t .cxx_destruct](lite_job_t *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_spoolDocumentFormat, 0LL);
  objc_storeStrong((id *)&self->_spoolDocumentFilename, 0LL);
  objc_storeStrong((id *)&self->_jobHoldUntil, 0LL);
  objc_storeStrong((id *)&self->_ippSession, 0LL);
  objc_storeStrong((id *)&self->_printer, 0LL);
  objc_storeStrong((id *)&self->_printSettings, 0LL);
  objc_storeStrong((id *)&self->_jobPasswordEncryption, 0LL);
  objc_storeStrong((id *)&self->_jobPassword, 0LL);
  objc_storeStrong((id *)&self->_thumbnail, 0LL);
  objc_storeStrong((id *)&self->_jobTransaction, 0LL);
  objc_storeStrong((id *)&self->_jobActivity, 0LL);
  objc_storeStrong(&self->zmake_progress, 0LL);
  objc_storeStrong(&self->zclear_cancel_flag, 0LL);
  objc_storeStrong(&self->zset_cancel_flag, 0LL);
  objc_storeStrong(&self->zis_canceled, 0LL);
  objc_storeStrong((id *)&self->_mutableJobState, 0LL);
  objc_storeStrong((id *)&self->_cancel_source, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->job_stream_http, 0LL);
}
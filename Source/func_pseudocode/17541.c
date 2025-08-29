_OUTLINED_FUNCTION_0
void __fastcall OUTLINED_FUNCTION_0(
        void *a1,
        os_log_s *a2,
        __int64 a3,
        const char *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        uint8_t a9)
{
  __int64 v9; // x30

  if ( ((v9 ^ (2 * v9)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  _os_log_error_impl(a1, a2, OS_LOG_TYPE_ERROR, a4, &a9, 8u);
}
-[ipp_request_t opString]
id __cdecl -[ipp_request_t opString](ipp_request_t *self, SEL a2)
{
  unsigned int v3; // w16
  __CFString *v4; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = -[ipp_t op_or_status](self, "op_or_status") - 2;
  v4 = CFSTR("IPP_OP_PRINT_JOB");
  switch ( v3 )
  {
    case 0u:
      break;
    case 1u:
    case 5u:
      goto LABEL_6;
    case 2u:
      v4 = CFSTR("IPP_OP_VALIDATE_JOB");
      break;
    case 3u:
      v4 = CFSTR("IPP_OP_CREATE_JOB");
      break;
    case 4u:
      v4 = CFSTR("IPP_OP_SEND_DOCUMENT");
      break;
    case 6u:
      v4 = CFSTR("IPP_OP_CANCEL_JOB");
      break;
    case 7u:
      v4 = CFSTR("IPP_OP_GET_JOB_ATTRIBUTES");
      break;
    case 8u:
      v4 = CFSTR("IPP_OP_GET_JOBS");
      break;
    case 9u:
      v4 = CFSTR("IPP_OP_GET_PRINTER_ATTRIBUTES");
      break;
    default:
      if ( (unsigned int)CFSTR("IPP_OP_PRINT_JOB") == 60 )
      {
        v4 = CFSTR("IPP_OP_IDENTIFY_PRINTER");
      }
      else if ( (unsigned int)CFSTR("IPP_OP_PRINT_JOB") == 79 )
      {
        v4 = CFSTR("IPP_OP_GET_PRINTERS");
      }
      else
      {
LABEL_6:
        v4 = objc_retainAutoreleasedReturnValue(
               +[NSString stringWithFormat:](
                 &OBJC_CLASS___NSString,
                 "stringWithFormat:",
                 CFSTR("ipp-op-unknown (%d)"),
                 -[ipp_t op_or_status](self, "op_or_status")));
      }
      break;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}
-[iAUPServer logCommand:payload:length:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[iAUPServer logCommand:payload:length:](
        iAUPServer *self,
        SEL a2,
        unsigned __int8 a3,
        char *a4,
        unsigned int a5)
{
  __int64 v6; // x8
  const __CFString *v7; // x2
  NSString *v8; // x0
  __int64 v9; // [xsp+8h] [xbp-28h]
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( (int)a3 > 95 )
  {
    if ( (int)a3 <= 191 )
    {
      if ( (unsigned int)(a3 - 128) >= 8 )
      {
        if ( (unsigned int)(a3 - 96) >= 4 )
          goto LABEL_29;
        goto LABEL_22;
      }
    }
    else
    {
      if ( a3 == 192 )
      {
        v7 = CFSTR("Bootloader entry command acknowledged");
        goto LABEL_24;
      }
      if ( a3 == 193 )
      {
        v7 = CFSTR("App re-entry command acknowledged");
        goto LABEL_24;
      }
      if ( a3 != 194 )
        goto LABEL_29;
    }
LABEL_18:
    v8 = +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("Command: 0x%X %s"),
           a3,
           -[iAUPServer commandString:](self, "commandString:", a3, a4, *(_QWORD *)&a5));
LABEL_23:
    v7 = (const __CFString *)v8;
    goto LABEL_24;
  }
  if ( (int)a3 > 4 )
  {
    v6 = (unsigned int)(a3 - 6);
    if ( (unsigned int)v6 > 0x3C )
      goto LABEL_27;
    if ( ((1LL << (a3 - 6)) & 0x3C000000) == 0 )
    {
      if ( ((1LL << (a3 - 6)) & 0x1400000000000003LL) == 0 )
      {
        if ( v6 == 59 )
        {
          v7 = CFSTR("Setting app re-entry");
          goto LABEL_24;
        }
LABEL_27:
        if ( a3 == 5 )
        {
          v8 = +[NSString stringWithFormat:](
                 &OBJC_CLASS___NSString,
                 "stringWithFormat:",
                 CFSTR("Downloading [%d] block 0x%04X"),
                 (unsigned __int8)*a4,
                 __rev16(*(unsigned __int16 *)(a4 + 1)));
          goto LABEL_23;
        }
LABEL_29:
        v8 = +[NSString stringWithFormat:](
               &OBJC_CLASS___NSString,
               "stringWithFormat:",
               CFSTR("Unknown command received (%02X)"),
               a3,
               v9);
        goto LABEL_23;
      }
      goto LABEL_18;
    }
LABEL_22:
    v8 = +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("Command: %s"),
           -[iAUPServer commandString:](self, "commandString:", a3, a4, *(_QWORD *)&a5),
           v9);
    goto LABEL_23;
  }
  if ( (unsigned int)(a3 - 2) < 3 || !a3 )
    goto LABEL_18;
  if ( a3 != 1 )
    goto LABEL_29;
  switch ( *a4 )
  {
    case 0:
      v7 = CFSTR("Bootloader initialized");
      break;
    case 1:
      v7 = CFSTR("Metadata received");
      break;
    case 2:
      v7 = CFSTR("Certificate received");
      break;
    case 3:
      v7 = CFSTR("Certificate validated");
      break;
    case 4:
      v7 = CFSTR("Hash received");
      break;
    case 5:
      v7 = CFSTR("Signature verified");
      break;
    case 6:
      v7 = CFSTR("Firmware mass erased");
      break;
    case 7:
      v7 = CFSTR("Firmware image installed");
      break;
    case 8:
      v7 = CFSTR("Firmware image validated");
      break;
    default:
      JUMPOUT(0LL);
  }
LABEL_24:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[iAUPServer appendToLog:](self, "appendToLog:", v7, a4, *(_QWORD *)&a5);
}
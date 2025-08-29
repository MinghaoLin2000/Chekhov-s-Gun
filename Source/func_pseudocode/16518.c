-[iAUPServer commandString:]
char *__cdecl -[iAUPServer commandString:](iAUPServer *self, SEL a2, int a3)
{
  char *result; // x0

  if ( a3 <= 65 )
  {
    switch ( a3 )
    {
      case 0:
        result = "COMMAND_GetMetadata";
        break;
      case 1:
        result = "COMMAND_NotifyProcessStatus";
        break;
      case 2:
        result = "COMMAND_SetBlockTransferSize";
        break;
      case 3:
        result = "COMMAND_SetBaseImageTransferAddress";
        break;
      case 4:
        result = "COMMAND_GetObjectSize";
        break;
      case 5:
        result = "COMMAND_GetObjectBlock";
        break;
      case 6:
        result = "COMMAND_SetAccessoryCapabilities";
        break;
      case 7:
        result = "COMMAND_SetResumeInfo";
        break;
      default:
        result = "COMMAND_iAUPv2_Identify";
        switch ( a3 )
        {
          case ' ':
            return result;
          case '!':
            result = "COMMAND_iAUPv2_RequestDownload";
            break;
          case '"':
            result = "COMMAND_iAUPv2_DownloadComplete";
            break;
          case '#':
            result = "COMMAND_iAUPv2_NotifyAccessoryError";
            break;
          default:
LABEL_31:
            result = "unknown";
            break;
        }
        break;
    }
  }
  else
  {
    switch ( a3 )
    {
      case 128:
        result = "COMMAND_RetMetadata";
        break;
      case 129:
        result = "COMMAND_AckNotifyProcessStatus";
        break;
      case 130:
        result = "COMMAND_AckSetBlockTransferSize";
        break;
      case 131:
        result = "COMMAND_AckSetBaseImageTransferAddress";
        break;
      case 132:
        result = "COMMAND_RetObjectSize";
        break;
      case 133:
        result = "COMMAND_RetObjectBlock";
        break;
      case 134:
        result = "COMMAND_AckAccessoryCapabilities";
        break;
      case 135:
        result = "COMMAND_AckResumeInfo";
        break;
      default:
        switch ( a3 )
        {
          case '`':
            result = "COMMAND_iAUPv2_AckIdentify";
            break;
          case 'a':
            result = "COMMAND_iAUPv2_AckRequestDownload";
            break;
          case 'b':
            result = "COMMAND_iAUPv2_AckDownloadComplete";
            break;
          case 'c':
            result = "COMMAND_iAUPv2_NotifyDeviceError";
            break;
          default:
            if ( a3 != 66 )
              goto LABEL_31;
            result = "COMMAND_GetPersonalizationInfo";
            break;
        }
        break;
    }
  }
  return result;
}
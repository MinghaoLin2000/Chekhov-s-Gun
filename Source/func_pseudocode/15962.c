_uarpStageStatusToString
__int128 *__fastcall uarpStageStatusToString(unsigned __int16 a1)
{
  const char *v1; // x19
  const char *v2; // x0

  v1 = "Upload Denied";
  switch ( (char)a1 )
  {
    case 1:
      strcpy((char *)xmmword_10002AC9C, "Upload Complete");
      return xmmword_10002AC9C;
    case 2:
      goto LABEL_7;
    case 3:
      v1 = "Upload Abandoned";
      goto LABEL_7;
    case 4:
      v1 = "Asset Corrupt";
      goto LABEL_7;
    case 5:
      v1 = "Asset Not Found";
      goto LABEL_7;
    default:
      v1 = "<unknown>";
LABEL_7:
      v2 = uarpProcessingFlagsReasonToString(a1 & 0xFF00);
      snprintf((char *)xmmword_10002AC9C, 0x100uLL, "%s (%s)", v1, v2);
      return xmmword_10002AC9C;
  }
}
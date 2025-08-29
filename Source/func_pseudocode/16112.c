_IOHIDDeviceSetReport
IOReturn __cdecl IOHIDDeviceSetReport(
        IOHIDDeviceRef device,
        IOHIDReportType reportType,
        CFIndex reportID,
        const uint8_t *report,
        CFIndex reportLength)
{
  return _IOHIDDeviceSetReport(device, reportType, reportID, report, reportLength);
}
/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class PTPOperationResponsePacket, PTPDeviceInfoDataset, PTPEventPacket, NSString, PTPWrappedBytes, PTPTransport, NSMutableDictionary, NSMutableArray;

@interface PTPInitiator : NSObject {
	PTPTransport *_transport;	// 4 = 0x4
	PTPOperationResponsePacket *_response;	// 8 = 0x8
	PTPEventPacket *_event;	// 12 = 0xc
	unsigned _transactionID;	// 16 = 0x10
	unsigned short _operationCode;	// 20 = 0x14
	BOOL _responseReceived;	// 22 = 0x16
	BOOL _requestPending;	// 23 = 0x17
	BOOL _cancelOp;	// 24 = 0x18
	unsigned _lastAddedObject;	// 28 = 0x1c
	id _delegate;	// 32 = 0x20
	BOOL _sessionOpen;	// 36 = 0x24
	BOOL _needToReopenSession;	// 37 = 0x25
	NSMutableArray *_storages;	// 40 = 0x28
	PTPDeviceInfoDataset *_deviceInfo;	// 44 = 0x2c
	NSMutableArray *_eventQueue;	// 48 = 0x30
	unsigned short _deviceVendorID;	// 52 = 0x34
	unsigned short _deviceProductID;	// 54 = 0x36
	NSString *_UUIDString;	// 56 = 0x38
	NSString *_deviceSerialNumberString;	// 60 = 0x3c
	unsigned _estimatedNumOfDownloadableObjects;	// 64 = 0x40
	unsigned _numOfDownloadableObjectsPlusFolders;	// 68 = 0x44
	unsigned _contentCatalogPercentCompleted;	// 72 = 0x48
	NSString *_userAssignedDeviceName;	// 76 = 0x4c
	BOOL _appleDeviceHasNewFW;	// 80 = 0x50
	BOOL _deviceIsPairedWithThisHost;	// 81 = 0x51
	BOOL _deviceIsPasscodeLocked;	// 82 = 0x52
	BOOL _deviceIsDummyPTPDevice;	// 83 = 0x53
	NSMutableDictionary *_arrayOf64BitFileSizes;	// 84 = 0x54
	PTPWrappedBytes *_dataForTransaction;	// 88 = 0x58
	unsigned long long _excessReceivedDataSize;	// 92 = 0x5c
	unsigned long long _totalFDFileSize;	// 100 = 0x64
	unsigned long long _totalFDReceivedSize;	// 108 = 0x6c
	unsigned _totalFDReportedProgress;	// 116 = 0x74
	double _currentFDNoteTime;	// 120 = 0x78
	char *_metadataBuffer;	// 128 = 0x80
	unsigned _maxMetadataBufferSize;	// 132 = 0x84
}
@property(readonly, retain) NSString *UUIDString;	// G=0x36dd4a2d; converted property
@property(readonly, assign) BOOL appleDeviceHasNewFW;	// G=0x36dd4a3d; converted property
@property(assign) unsigned long contentCatalogPercentCompleted;	// G=0x36dd4a8d; S=0x36dd4a9d; converted property
@property(readonly, retain) PTPDeviceInfoDataset *deviceInfo;	// G=0x36ddbee5; converted property
@property(readonly, assign) BOOL deviceIsDummyPTPDevice;	// G=0x36dd4a6d; converted property
@property(readonly, assign) BOOL deviceIsPairedWithThisHost;	// G=0x36dd4a4d; converted property
@property(readonly, assign) BOOL deviceIsPasscodeLocked;	// G=0x36dd4a5d; converted property
@property(readonly, assign) unsigned short deviceProductID;	// G=0x36dd4a0d; converted property
@property(readonly, retain) NSString *deviceSerialNumberString;	// G=0x36dd4a1d; converted property
@property(readonly, assign) unsigned short deviceVendorID;	// G=0x36dd49fd; converted property
@property(readonly, assign) char *metadataBuffer;	// G=0x36dde0d5; converted property
@property(readonly, assign) BOOL requestPending;	// G=0x36dd4ab5; converted property
@property(readonly, retain) PTPTransport *transport;	// G=0x36dd49c9; converted property
@property(readonly, retain) NSString *userAssignedDeviceName;	// G=0x36dddaf9; converted property
- (id)initWithHostLocationID:(unsigned long)hostLocationID;	// 0x36dde50d
- (id)initWithTargetAddress:(id)targetAddress targetPort:(unsigned long)port targetGUID:(id)guid targetName:(id)name hostGUID:(id)guid5 hostName:(id)name6;	// 0x36dd8841
// converted property getter: - (id)UUIDString;	// 0x36dd4a2d
- (BOOL)allowKeepAwake;	// 0x36dd8991
- (void)appendDataBuffer:(void *)buffer length:(unsigned long)length;	// 0x36ddd935
// converted property getter: - (BOOL)appleDeviceHasNewFW;	// 0x36dd4a3d
- (void)cancel;	// 0x36dddcdd
- (BOOL)closeSession;	// 0x36ddb849
// converted property getter: - (unsigned long)contentCatalogPercentCompleted;	// 0x36dd4a8d
- (id)dataFromFile:(id)file maxSize:(unsigned long)size actualSize:(unsigned *)size3 useBuffer:(char *)buffer;	// 0x36dd9bdd
- (void)dealloc;	// 0x36dde1d9
- (BOOL)deleteFile:(id)file;	// 0x36dd90d9
- (id)deviceDateTime;	// 0x36dd8e59
// converted property getter: - (id)deviceInfo;	// 0x36ddbee5
// converted property getter: - (BOOL)deviceIsDummyPTPDevice;	// 0x36dd4a6d
// converted property getter: - (BOOL)deviceIsPairedWithThisHost;	// 0x36dd4a4d
// converted property getter: - (BOOL)deviceIsPasscodeLocked;	// 0x36dd4a5d
// converted property getter: - (unsigned short)deviceProductID;	// 0x36dd4a0d
- (id)devicePropertyDescDatasetForProperty:(unsigned short)property;	// 0x36ddbd2d
- (id)devicePropertyValueForProperty:(unsigned short)property;	// 0x36ddbc05
- (void)deviceReset;	// 0x36dd8c5d
// converted property getter: - (id)deviceSerialNumberString;	// 0x36dd4a1d
- (unsigned short)deviceStatus;	// 0x36dd8c7d
// converted property getter: - (unsigned short)deviceVendorID;	// 0x36dd49fd
- (void)handleData:(id)data;	// 0x36ddd711
- (void)handleDeviceRemoval;	// 0x36ddcb05
- (void)handleEvent:(id)event;	// 0x36ddd2a1
- (void)handleReroutedEvent:(id)event;	// 0x36ddcb5d
- (void)handleResponse:(id)response;	// 0x36ddd6b9
- (void)handleStartData:(id)data;	// 0x36dddae5
- (BOOL)initiateCapture;	// 0x36dd921d
- (id)initiator;	// 0x36dd49c5
- (BOOL)isAccessRestrictedAppleDevice;	// 0x36dd8a6d
- (void)issueCancelEvent:(unsigned long)event;	// 0x36ddc7e5
- (void)issueCancelRequest:(unsigned long)request;	// 0x36ddc765
- (id)itemForObjectHandle:(unsigned long)objectHandle;	// 0x36dde105
- (unsigned long)maxMetadataBufferSize;	// 0x36dd49d9
// converted property getter: - (char *)metadataBuffer;	// 0x36dde0d5
- (unsigned long)numObjectsInStorage:(unsigned long)storage objectFormatCode:(unsigned long)code association:(unsigned long)association;	// 0x36ddb065
- (unsigned long)numOfDownloadableObjectsPlusFolders;	// 0x36dd4a7d
- (id)objectFilesystemInfosForObjectsInStorage:(unsigned long)storage objectFormatCode:(unsigned long)code association:(unsigned long)association;	// 0x36dd9d99
- (id)objectHandlesInStorage64:(unsigned long)storage64 objectFormatCode:(unsigned long)code association:(unsigned long)association;	// 0x36ddabdd
- (id)objectHandlesInStorage:(unsigned long)storage objectFormatCode:(unsigned long)code association:(unsigned long)association;	// 0x36ddaf05
- (unsigned long long)objectInfo64BitSize:(unsigned long)size;	// 0x36dda1c9
- (id)objectInfo:(unsigned long)info;	// 0x36dda7b9
- (id)objectInfosForObjectsInStorage64:(unsigned long)storage64 objectFormatCode:(unsigned long)code association:(unsigned long)association;	// 0x36dda309
- (id)objectInfosForObjectsInStorage:(unsigned long)storage objectFormatCode:(unsigned long)code association:(unsigned long)association;	// 0x36dda561
- (BOOL)openSession;	// 0x36ddb92d
- (id)partialDataFromFile:(id)file fromOffset:(unsigned long)offset maxSize:(unsigned long)size actualSize:(unsigned *)size4 useBuffer:(char *)buffer;	// 0x36dd9965
- (void)processUnhandledEvents;	// 0x36ddc931
- (void)readStorages;	// 0x36ddb209
- (id)refreshAssignedDeviceName;	// 0x36dddb31
// converted property getter: - (BOOL)requestPending;	// 0x36dd4ab5
- (BOOL)resetDevicePropertyValueForProperty:(unsigned short)property;	// 0x36ddba45
- (unsigned short)saveFile:(id)file to:(id)to;	// 0x36dd94bd
- (unsigned short)savePartialFile:(id)file fromOffset:(unsigned long long)offset size:(unsigned long long)size to:(id)to;	// 0x36dd92e1
- (id)sendRequest:(id)request andReceiveData:(id)data excessReceivedDataSize:(unsigned long long *)size timeout:(double)timeout;	// 0x36ddc181
- (id)sendRequest:(id)request andReceiveData:(id)data maxDataSize:(unsigned long)size excessReceivedDataSize:(unsigned long long *)size4 timeout:(double)timeout;	// 0x36ddc1ad
- (id)sendRequest:(id)request andSendData:(id)data;	// 0x36ddc3b5
- (id)sendRequest:(id)request excessReceivedDataSize:(unsigned long long *)size timeout:(double)timeout;	// 0x36ddc571
- (void)sentData:(id)data;	// 0x36ddc139
// converted property setter: - (void)setContentCatalogPercentCompleted:(unsigned long)completed;	// 0x36dd4a9d
- (void)setDelegate:(id)delegate;	// 0x36dd49b5
- (BOOL)setDeviceDateTime:(id)time;	// 0x36dd8ca1
- (BOOL)setDevicePropertyValue:(id)value forProperty:(unsigned short)property;	// 0x36ddbb09
- (BOOL)start;	// 0x36ddddd9
- (void)stop;	// 0x36dddd61
- (id)storageForStorageID:(unsigned long)storageID;	// 0x36ddb145
- (id)storageIDs;	// 0x36ddb709
- (id)storageInfo:(unsigned long)info;	// 0x36ddb551
- (id)thumbDataFromFile:(id)file maxSize:(unsigned long)size actualSize:(unsigned *)size3 useBuffer:(char *)buffer;	// 0x36dd972d
- (double)timeOffset;	// 0x36dd8e19
// converted property getter: - (id)transport;	// 0x36dd49c9
- (void)transportActivated;	// 0x36dd4aad
- (int)transportConnectionStatus;	// 0x36dddcbd
- (void)transportDeactivated;	// 0x36dd4ab1
// converted property getter: - (id)userAssignedDeviceName;	// 0x36dddaf9
- (BOOL)waitForResponseWithTimeout:(double)timeout notifyProgressForFile:(id)file;	// 0x36ddc869
@end


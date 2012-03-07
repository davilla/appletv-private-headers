/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"
#import "NSCopying.h"
#import "DAEAS-Structs.h"

@class NSSet, NSMutableSet, NSArray, ASMailMessage, NSString;

@interface ASFolderItemsSyncTask : ASTask <NSCopying> {
	NSString *_folderID;	// 104 = 0x68
	NSString *_previousSyncKey;	// 108 = 0x6c
	int _dataclass;	// 112 = 0x70
	NSArray *_actions;	// 116 = 0x74
	NSMutableSet *_rejectedServerIds;	// 120 = 0x78
	BOOL _isInitialSync;	// 124 = 0x7c
	BOOL _isInitialBootstrapSync;	// 125 = 0x7d
	BOOL _willUpdate;	// 126 = 0x7e
	BOOL _moreAvailable;	// 127 = 0x7f
	BOOL _isResyncAfterConnectionFailed;	// 128 = 0x80
	BOOL _haveShortcut121Response;	// 129 = 0x81
	int _numReplacedItems;	// 132 = 0x84
	int _numDownloadedElements;	// 136 = 0x88
	BOOL _isSpinning;	// 140 = 0x8c
	int _bodyTruncationBytes;	// 144 = 0x90
	int _mimeSupport;	// 148 = 0x94
	int _filterDays;	// 152 = 0x98
	ASMailMessage *_streamingMailMessage;	// 156 = 0x9c
	NSArray *_perservedActions;	// 160 = 0xa0
	NSArray *_pushedActions;	// 164 = 0xa4
	BOOL _hadFalseMoreAvailable;	// 168 = 0xa8
@private
	BOOL _deletesAsMoves;	// 169 = 0xa9
}
@property(retain) NSArray *actions;	// G=0x31586bd9; S=0x31586bed; @synthesize=_actions
@property(assign) int bodyTruncationBytes;	// G=0x31586b31; S=0x31586b41; @synthesize=_bodyTruncationBytes
@property(assign) int dataclass;	// G=0x31586c11; S=0x31586c21; @synthesize=_dataclass
@property(assign) int filterDays;	// G=0x31586b51; S=0x31586b61; @synthesize=_filterDays
@property(readonly, assign) NSString *folderID;	// G=0x31586ba9; @synthesize=_folderID
@property(assign) BOOL isInitialBootstrapSync;	// G=0x31586c51; S=0x31586c61; @synthesize=_isInitialBootstrapSync
@property(assign) BOOL isInitialSync;	// G=0x31586c31; S=0x31586c41; @synthesize=_isInitialSync
@property(assign) BOOL isResyncAfterConnectionFailed;	// G=0x31586cd9; S=0x31586ce9; @synthesize=_isResyncAfterConnectionFailed
@property(assign, setter=setMIMESupport:) int mimeSupport;	// G=0x31586b11; S=0x31586b21; @synthesize=_mimeSupport
@property(assign) BOOL moreAvailable;	// G=0x31586c71; S=0x31586c81; @synthesize=_moreAvailable
@property(readonly, assign) int numDownloadedElements;	// G=0x31586a41; converted property
@property(retain) NSArray *perservedActions;	// G=0x31586cf9; S=0x31586d0d; @synthesize=_perservedActions
@property(copy) NSString *previousSyncKey;	// G=0x31586b71; S=0x31586b85; @synthesize=_previousSyncKey
@property(readonly, assign) NSString *previousSyncKeyForAgent;	// G=0x31586a51; 
@property(retain) NSArray *pushedActions;	// G=0x31586d31; S=0x31586d45; @synthesize=_pushedActions
@property(readonly, assign) NSSet *rejectedServerIds;	// G=0x31586cc9; @synthesize=_rejectedServerIds
@property(retain) ASMailMessage *streamingMailMessage;	// G=0x31586c91; S=0x31586ca5; @synthesize=_streamingMailMessage
@property(assign) BOOL willUpdate;	// G=0x31586bb9; S=0x31586bc9; @synthesize=_willUpdate
- (id)initWithFolderID:(id)folderID;	// 0x31584039
- (id)initWithFolderID:(id)folderID deletesAsMoves:(BOOL)moves;	// 0x3158404d
- (void)_addRejectedServerId:(id)anId;	// 0x315860e1
- (int)_bodyTruncationCode;	// 0x315848ad
- (void)_handleChangedLeaf:(id)leaf addedChangesPtr:(id *)ptr modifiedChangesPtr:(id *)ptr3 removedChangesPtr:(id *)ptr4;	// 0x31584e11
- (void)_handleResponseToLeaf:(id)leaf addedResponsesPtr:(id *)ptr modifiedResponsesPtr:(id *)ptr3 removedResponsesPtr:(id *)ptr4 fetchedResponsesPtr:(id *)ptr5;	// 0x31584ed9
- (int)_mimeSupportCode;	// 0x31584871
- (int)_mimeTruncationCode;	// 0x315848e9
- (void)_setSpinning:(BOOL)spinning;	// 0x31583d75
// declared property getter: - (id)actions;	// 0x31586bd9
- (void)appendActionData:(id)data;	// 0x315842fd
- (void)appendSupportedFieldsData:(id)data;	// 0x31584561
// declared property getter: - (int)bodyTruncationBytes;	// 0x31586b31
- (int)bodyType;	// 0x315842cd
- (BOOL)checkForErrorInContext:(id)context;	// 0x31585565
- (int)commandCode;	// 0x31583d71
- (int)connectionActionForResponse:(id)response;	// 0x31585499
- (id)copyWithZone:(NSZone *)zone;	// 0x315840fd
// declared property getter: - (int)dataclass;	// 0x31586c11
- (void)dealloc;	// 0x31583f51
// declared property getter: - (int)filterDays;	// 0x31586b51
- (void)finishWithError:(id)error;	// 0x31586149
// declared property getter: - (id)folderID;	// 0x31586ba9
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x31585551
- (int)handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x31584ff1
// declared property getter: - (BOOL)isInitialBootstrapSync;	// 0x31586c51
// declared property getter: - (BOOL)isInitialSync;	// 0x31586c31
// declared property getter: - (BOOL)isResyncAfterConnectionFailed;	// 0x31586cd9
// declared property getter: - (int)mimeSupport;	// 0x31586b11
// declared property getter: - (BOOL)moreAvailable;	// 0x31586c71
// converted property getter: - (int)numDownloadedElements;	// 0x31586a41
- (double)percentComplete;	// 0x315868fd
// declared property getter: - (id)perservedActions;	// 0x31586cf9
// declared property getter: - (id)previousSyncKey;	// 0x31586b71
// declared property getter: - (id)previousSyncKeyForAgent;	// 0x31586a51
- (BOOL)processContext:(id)context;	// 0x31585a75
// declared property getter: - (id)pushedActions;	// 0x31586d31
// declared property getter: - (id)rejectedServerIds;	// 0x31586cc9
- (id)replacementObjectForEmailItem:(id)emailItem;	// 0x31585165
- (void)reportStatusWithError:(id)error;	// 0x31586a85
- (id)requestBody;	// 0x31584925
// declared property setter: - (void)setActions:(id)actions;	// 0x31586bed
// declared property setter: - (void)setBodyTruncationBytes:(int)bytes;	// 0x31586b41
// declared property setter: - (void)setDataclass:(int)dataclass;	// 0x31586c21
// declared property setter: - (void)setFilterDays:(int)days;	// 0x31586b61
// declared property setter: - (void)setIsInitialBootstrapSync:(BOOL)sync;	// 0x31586c61
// declared property setter: - (void)setIsInitialSync:(BOOL)sync;	// 0x31586c41
// declared property setter: - (void)setIsResyncAfterConnectionFailed:(BOOL)failed;	// 0x31586ce9
// declared property setter: - (void)setMIMESupport:(int)support;	// 0x31586b21
// declared property setter: - (void)setMoreAvailable:(BOOL)available;	// 0x31586c81
// declared property setter: - (void)setPerservedActions:(id)actions;	// 0x31586d0d
// declared property setter: - (void)setPreviousSyncKey:(id)key;	// 0x31586b85
// declared property setter: - (void)setPushedActions:(id)actions;	// 0x31586d45
// declared property setter: - (void)setStreamingMailMessage:(id)message;	// 0x31586ca5
// declared property setter: - (void)setWillUpdate:(BOOL)update;	// 0x31586bc9
// declared property getter: - (id)streamingMailMessage;	// 0x31586c91
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x31586995
// declared property getter: - (BOOL)willUpdate;	// 0x31586bb9
@end

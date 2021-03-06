/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class CoreDAVXMLData, NSMutableDictionary, NSDictionary, NSString;

@interface CoreDAVMultiPutTask : CoreDAVTask {
	NSString *_appSpecificNamespace;	// 104 = 0x68
	NSString *_appSpecificDataProp;	// 108 = 0x6c
	NSString *_checkCTag;	// 112 = 0x70
	CoreDAVXMLData *_pushedData;	// 116 = 0x74
	BOOL _validCTag;	// 120 = 0x78
	NSString *_newCTag;	// 124 = 0x7c
	NSMutableDictionary *_uuidToHREF;	// 128 = 0x80
	NSMutableDictionary *_hrefToETag;	// 132 = 0x84
}
@property(readonly, assign) NSDictionary *hrefToETag;	// G=0x331a09f1; @synthesize=_hrefToETag
@property(readonly, assign) NSString *newCTag;	// G=0x331a0a11; @synthesize=_newCTag
@property(readonly, assign) NSDictionary *uuidToHREF;	// G=0x331a0a01; @synthesize=_uuidToHREF
- (id)initWithURL:(id)url checkCTag:(id)tag uuidsToAddActions:(id)addActions hrefsToModDeleteActions:(id)modDeleteActions;	// 0x331a0dcd
- (id)additionalHeaderValues;	// 0x331a0bd5
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x331a0a21
- (void)dealloc;	// 0x331a0d19
- (void)fillOutDataWithUUIDsToAddActions:(id)addActions hrefsToModDeleteActions:(id)modDeleteActions;	// 0x331a11e5
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x331a0f55
// declared property getter: - (id)hrefToETag;	// 0x331a09f1
- (id)httpMethod;	// 0x331a09e5
// declared property getter: - (id)newCTag;	// 0x331a0a11
- (id)requestBody;	// 0x331a0bb5
// declared property getter: - (id)uuidToHREF;	// 0x331a0a01
@end


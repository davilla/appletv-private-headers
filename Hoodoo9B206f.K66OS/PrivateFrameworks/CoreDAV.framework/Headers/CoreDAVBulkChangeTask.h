/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSData, NSMutableSet, NSString, NSSet, NSDictionary;

@interface CoreDAVBulkChangeTask : CoreDAVTask {
	NSString *_appSpecificNamespace;	// 132 = 0x84
	NSString *_appSpecificDataProp;	// 136 = 0x88
	NSDictionary *_uuidsToAddActions;	// 140 = 0x8c
	NSDictionary *_hrefsToModDeleteActions;	// 144 = 0x90
	NSString *_checkCTag;	// 148 = 0x94
	BOOL _simple;	// 152 = 0x98
	BOOL _returnChangedData;	// 153 = 0x99
	NSData *_pushedData;	// 156 = 0x9c
	BOOL _validCTag;	// 160 = 0xa0
	NSString *_nextCTag;	// 164 = 0xa4
	NSMutableSet *_bulkChangeResponses;	// 168 = 0xa8
	NSString *_requestDataContentType;	// 172 = 0xac
}
@property(readonly, assign) NSSet *bulkChangeResponses;	// G=0x33a12801; @synthesize=_bulkChangeResponses
@property(readonly, assign) NSDictionary *hrefsToModDeleteActions;	// G=0x33a127e1; @synthesize=_hrefsToModDeleteActions
@property(readonly, assign) NSString *nextCTag;	// G=0x33a127f1; @synthesize=_nextCTag
@property(readonly, assign) NSDictionary *uuidsToAddActions;	// G=0x33a127d1; @synthesize=_uuidsToAddActions
- (id)initWithURL:(id)url checkCTag:(id)tag simple:(BOOL)simple returnChangedData:(BOOL)data uuidsToAddActions:(id)addActions hrefsToModDeleteActions:(id)modDeleteActions;	// 0x33a11461
- (id)additionalHeaderValues;	// 0x33a1168d
// declared property getter: - (id)bulkChangeResponses;	// 0x33a12801
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x33a11f79
- (void)dealloc;	// 0x33a115a1
- (void)fillOutDataWithUUIDsToAddActions:(id)addActions hrefsToModDeleteActions:(id)modDeleteActions;	// 0x33a117e5
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x33a12131
// declared property getter: - (id)hrefsToModDeleteActions;	// 0x33a127e1
- (id)httpMethod;	// 0x33a117c9
// declared property getter: - (id)nextCTag;	// 0x33a127f1
- (id)requestBody;	// 0x33a117d5
// declared property getter: - (id)uuidsToAddActions;	// 0x33a127d1
@end


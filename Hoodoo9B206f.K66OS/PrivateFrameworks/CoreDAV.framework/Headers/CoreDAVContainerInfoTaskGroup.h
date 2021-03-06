/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskGroup.h"
#import "CoreDAVPropFindTaskDelegate.h"

@class NSMutableSet, NSString, NSSet;
@protocol CoreDAVContainerInfoTaskGroupDelegate;

@interface CoreDAVContainerInfoTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {
	int _phase;	// 44 = 0x2c
	NSMutableSet *_containerURLs;	// 48 = 0x30
	NSMutableSet *_containers;	// 52 = 0x34
	int _containerInfoDepth;	// 56 = 0x38
	NSString *_appSpecificHomeSetPropNameSpace;	// 60 = 0x3c
	NSString *_appSpecificHomeSetPropName;	// 64 = 0x40
}
@property(assign) int containerInfoDepth;	// G=0x339df331; S=0x339df341; @synthesize=_containerInfoDepth
@property(readonly, assign) NSSet *containerURLs;	// G=0x339df351; @synthesize=_containerURLs
@property(assign, nonatomic) id<CoreDAVContainerInfoTaskGroupDelegate> delegate;	// @dynamic
- (id)initWithAccountInfoProvider:(id)accountInfoProvider containerURLs:(id)urls taskManager:(id)manager;	// 0x339de645
- (id)_copyContainerParserMappings;	// 0x339df315
- (id)_copyContainerWithURL:(id)url andProperties:(id)properties;	// 0x339df2d9
- (void)_getContainerHomeSet;	// 0x339de859
- (void)_getContainerTopLevelInfo;	// 0x339dea09
// declared property getter: - (int)containerInfoDepth;	// 0x339df331
// declared property getter: - (id)containerURLs;	// 0x339df351
- (void)dealloc;	// 0x339de6ad
- (id)description;	// 0x339de735
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x339debe5
// declared property setter: - (void)setContainerInfoDepth:(int)depth;	// 0x339df341
- (void)startTaskGroup;	// 0x339de7a5
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x339de7ed
@end


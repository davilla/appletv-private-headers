/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskGroup.h"
#import "CoreDAVPropFindTaskDelegate.h"

@class NSSet, NSMutableSet, NSString;
@protocol CoreDAVContainerInfoTaskGroupDelegate;

@interface CoreDAVContainerInfoTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {
	int _phase;	// 44 = 0x2c
	NSMutableSet *_containerURLs;	// 48 = 0x30
	NSMutableSet *_containers;	// 52 = 0x34
	int _containerInfoDepth;	// 56 = 0x38
	NSString *_appSpecificHomeSetPropNameSpace;	// 60 = 0x3c
	NSString *_appSpecificHomeSetPropName;	// 64 = 0x40
}
@property(assign) int containerInfoDepth;	// G=0x3317395d; S=0x3317396d; @synthesize=_containerInfoDepth
@property(readonly, assign) NSSet *containerURLs;	// G=0x3317394d; @synthesize=_containerURLs
@property(assign, nonatomic) id<CoreDAVContainerInfoTaskGroupDelegate> delegate;	// @dynamic
- (id)initWithAccountInfoProvider:(id)accountInfoProvider containerURLs:(id)urls taskManager:(id)manager;	// 0x33173c7d
- (id)_copyContainerParserMappings;	// 0x3317397d
- (id)_copyContainerWithURL:(id)url andProperties:(id)properties;	// 0x3317399d
- (void)_getContainerHomeSet;	// 0x331739d1
- (void)_getContainerTopLevelInfo;	// 0x33173d51
// declared property getter: - (int)containerInfoDepth;	// 0x3317395d
// declared property getter: - (id)containerURLs;	// 0x3317394d
- (void)dealloc;	// 0x33173bfd
- (id)description;	// 0x33173cdd
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x33173f31
// declared property setter: - (void)setContainerInfoDepth:(int)depth;	// 0x3317396d
- (void)startTaskGroup;	// 0x33173bbd
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x33173b5d
@end


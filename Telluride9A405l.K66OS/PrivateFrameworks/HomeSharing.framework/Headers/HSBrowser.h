/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <NSObject.h> // Unknown library
#import "NSNetServiceDelegate.h"
#import "HomeSharing-Structs.h"

@class NSString, NSArray;

@interface HSBrowser : NSObject <NSNetServiceDelegate> {
@private
	NSArray *_availableLibraries;	// 4 = 0x4
	NSString *_homeSharingGroupID;	// 8 = 0x8
	DNSServiceRef_tRef _dnsService;	// 12 = 0xc
	id _addLibraryHandler;	// 16 = 0x10
	id _removeLibraryHandler;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSArray *availableLibraries;	// G=0x351857c1; 
@property(copy, nonatomic) NSString *homeSharingGroupID;	// G=0x35185e5d; S=0x35185e6d; @synthesize=_homeSharingGroupID
- (void)_didFindService:(id)service moreComing:(BOOL)coming;	// 0x351857f9
- (void)_didRemoveService:(id)service moreComing:(BOOL)coming;	// 0x35185c2d
// declared property getter: - (id)availableLibraries;	// 0x351857c1
- (void)dealloc;	// 0x35185321
// declared property getter: - (id)homeSharingGroupID;	// 0x35185e5d
// declared property setter: - (void)setHomeSharingGroupID:(id)anId;	// 0x35185e6d
- (void)startWithAddLibraryHandler:(id)addLibraryHandler removeLibraryHandler:(id)handler;	// 0x35185399
- (void)stop;	// 0x351855f1
@end


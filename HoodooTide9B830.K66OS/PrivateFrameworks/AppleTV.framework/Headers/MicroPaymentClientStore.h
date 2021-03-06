/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "ISSingleton.h"

@class NSArray, NSMutableArray, NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface MicroPaymentClientStore : NSObject <ISSingleton> {
@private
	NSMutableArray *_clients;	// 4 = 0x4
	NSManagedObjectContext *_context;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *clients;	// G=0x32b46ebd; @synthesize=_clients
+ (void)setSharedInstance:(id)instance;	// 0x32b46c59
+ (id)sharedInstance;	// 0x32b46c99
- (id)_clients;	// 0x32b47001
- (id)_managedObjectContext;	// 0x32b47171
- (id)clientForIdentity:(id)identity create:(BOOL)create;	// 0x32b46cd5
// declared property getter: - (id)clients;	// 0x32b46ebd
- (id)copyClientsForIdentifier:(id)identifier;	// 0x32b46ef5
- (void)dealloc;	// 0x32b46bd5
@end


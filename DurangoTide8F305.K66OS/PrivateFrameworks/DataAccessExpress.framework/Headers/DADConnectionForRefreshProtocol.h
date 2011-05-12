/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import "AccountRefreshProtocol.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface DADConnectionForRefreshProtocol : NSObject <AccountRefreshProtocol> {
	NSString *_accountIdentifier;	// 4 = 0x4
}
+ (id)accountToRefreshForBasicAccount:(id)basicAccount;	// 0x3407251d
- (id)_initWithBasicAccount:(id)basicAccount;	// 0x340725a5
- (void)dealloc;	// 0x3407255d
- (id)defaultContainerIdentifierForDataclass:(id)dataclass;	// 0x340758d5
- (BOOL)refreshContainerListForDataclass:(id)dataclass;	// 0x34075919
- (BOOL)refreshContainerWithIdentifier:(id)identifier forDataclass:(id)dataclass;	// 0x340759a9
- (BOOL)refreshContainersForDataclass:(id)dataclass;	// 0x34075961
@end


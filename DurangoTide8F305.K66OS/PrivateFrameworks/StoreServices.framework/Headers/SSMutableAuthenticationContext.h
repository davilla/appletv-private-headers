/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "SSAuthenticationContext.h"

@class NSString, NSNumber, NSDictionary;

@interface SSMutableAuthenticationContext : SSAuthenticationContext <NSCopying, NSMutableCopying> {
}
@property(copy, nonatomic) NSString *accountName;	// S=0x324cc341; @dynamic
@property(assign, nonatomic, getter=isAccountNameEditable) BOOL accountNameEditable;	// S=0x324cc15d; @dynamic
@property(assign) int accountScope;	// S=0x324cc16d; @dynamic
@property(assign, nonatomic) BOOL canCreateNewAccount;	// S=0x324cc17d; @dynamic
@property(copy, nonatomic) NSString *clientIdentifierHeader;	// S=0x324cc215; @dynamic
@property(assign, nonatomic, getter=isDemoAccount) BOOL demoAccount;	// S=0x324cc19d; @dynamic
@property(copy, nonatomic) NSString *preferredITunesStoreClient;	// S=0x324cc305; @dynamic
@property(assign, nonatomic) int promptStyle;	// S=0x324cc18d; @dynamic
@property(copy, nonatomic) NSDictionary *requestParameters;	// S=0x324cc2c9; @dynamic
@property(retain, nonatomic) NSNumber *requiredUniqueIdentifier;	// S=0x324cc28d; @dynamic
@property(assign, nonatomic) BOOL shouldFollowAccountButtons;	// S=0x324cc1ad; @dynamic
@property(copy, nonatomic) NSDictionary *signupRequestParameters;	// S=0x324cc251; @dynamic
@property(assign, nonatomic) int tokenType;	// S=0x324cc1bd; @dynamic
- (id)copyWithZone:(NSZone *)zone;	// 0x324cc3c5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x324cc37d
// declared property setter: - (void)setAccountName:(id)name;	// 0x324cc341
// declared property setter: - (void)setAccountNameEditable:(BOOL)editable;	// 0x324cc15d
// declared property setter: - (void)setAccountScope:(int)scope;	// 0x324cc16d
// declared property setter: - (void)setCanCreateNewAccount:(BOOL)account;	// 0x324cc17d
// declared property setter: - (void)setClientIdentifierHeader:(id)header;	// 0x324cc215
// declared property setter: - (void)setDemoAccount:(BOOL)account;	// 0x324cc19d
// declared property setter: - (void)setPreferredITunesStoreClient:(id)client;	// 0x324cc305
// declared property setter: - (void)setPromptStyle:(int)style;	// 0x324cc18d
// declared property setter: - (void)setRequestParameters:(id)parameters;	// 0x324cc2c9
// declared property setter: - (void)setRequiredUniqueIdentifier:(id)identifier;	// 0x324cc28d
// declared property setter: - (void)setShouldFollowAccountButtons:(BOOL)followAccountButtons;	// 0x324cc1ad
// declared property setter: - (void)setSignupRequestParameters:(id)parameters;	// 0x324cc251
// declared property setter: - (void)setTokenType:(int)type;	// 0x324cc1bd
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVMerchantRepresentativeFeed.h"
#import "ATVMerchant.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface ATVSedonaMerchant : ATVMerchant <ATVMerchantRepresentativeFeed> {
}
+ (void)_initializeLibrary;	// 0x3079f745
+ (int)_libraryInitializationCondtionsYetToBeMet;	// 0x3079fb49
+ (id)accountType;	// 0x307a01f5
+ (id)allocWithZone:(NSZone *)zone;	// 0x307a05e1
+ (id)identifier;	// 0x3079f6ed
+ (void)initialize;	// 0x307a025d
- (id)init;	// 0x307a013d
- (void)_authenticationSucceeded:(id)succeeded;	// 0x3079fc81
- (void)_preferredAccountEstablished:(id)established;	// 0x3079fcc9
- (void)_preferredAccountRemoved:(id)removed;	// 0x3079fd59
- (id)boundFeatureName;	// 0x3079f709
- (Class)catalogAgent;	// 0x307a011d
- (void)dealloc;	// 0x3079f719
- (id)description;	// 0x3079f6f9
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method;	// 0x307a0075
- (id)loadRepresentativeFeed;	// 0x307a0375
- (id)localizedStringForKey:(id)key;	// 0x307a0529
- (id)merchantErrorForError:(id)error;	// 0x3079fe79
- (id)representativeFeedURL;	// 0x3079f705
@end


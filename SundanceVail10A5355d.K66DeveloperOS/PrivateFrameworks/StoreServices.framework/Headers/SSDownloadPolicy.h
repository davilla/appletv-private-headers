/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSArray, NSMutableArray, NSString;

@interface SSDownloadPolicy : NSObject <NSCoding, SSXPCCoding, NSCopying> {
	int _bagType;	// 4 = 0x4
	NSString *_downloadKind;	// 8 = 0x8
	NSMutableArray *_policyRules;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) int URLBagType;	// G=0x31949fe5; @synthesize=_bagType
@property(readonly, assign, nonatomic) NSString *downloadKind;	// G=0x31949fc1; @synthesize=_downloadKind
@property(copy, nonatomic) NSArray *policyRules;	// G=0x31949fd1; S=0x31949881; @synthesize=_policyRules
- (id)initWithCoder:(id)coder;	// 0x31949bdd
- (id)initWithDownloadKind:(id)downloadKind URLBagType:(int)type;	// 0x319496a9
- (id)initWithNetworkConstraints:(id)networkConstraints;	// 0x3194970d
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x31949db9
// declared property getter: - (int)URLBagType;	// 0x31949fe5
- (id)_policyRuleForSizeLimit:(long long)sizeLimit;	// 0x31949ee5
- (id)copyWithZone:(NSZone *)zone;	// 0x31949ca5
- (id)copyXPCEncoding;	// 0x31949d45
- (void)dealloc;	// 0x31949755
// declared property getter: - (id)downloadKind;	// 0x31949fc1
- (void)encodeWithCoder:(id)coder;	// 0x31949b5d
- (unsigned)hash;	// 0x31949a91
- (BOOL)isEqual:(id)equal;	// 0x31949ab1
// declared property getter: - (id)policyRules;	// 0x31949fd1
- (void)setPolicyRule:(id)rule;	// 0x319497b9
// declared property setter: - (void)setPolicyRules:(id)rules;	// 0x31949881
- (void)unionNetworkConstraints:(id)constraints;	// 0x319498c5
- (void)unionPolicyRule:(id)rule;	// 0x319499ed
@end


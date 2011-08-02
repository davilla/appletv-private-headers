/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSString, NSMutableArray;

@interface UIKBIdentifierList : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	NSMutableArray *m_list;	// 8 = 0x8
	BOOL m_explicit;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x3032ce15; 
@property(assign, nonatomic) BOOL explicit;	// G=0x3032cdf5; S=0x30159029; @synthesize=m_explicit
@property(readonly, assign, nonatomic) NSArray *list;	// G=0x300884a1; @synthesize=m_list
@property(copy, nonatomic) NSString *name;	// G=0x3032ce05; S=0x3032d1dd; @synthesize=m_name
- (id)init;	// 0x30158f9d
- (id)initWithCoder:(id)coder;	// 0x3032cf3d
- (void)addIdentifier:(id)identifier;	// 0x30158ff9
- (id)copyWithZone:(NSZone *)zone;	// 0x3032ce35
// declared property getter: - (unsigned)count;	// 0x3032ce15
- (void)dealloc;	// 0x3032cfdd
- (id)description;	// 0x3032d039
- (void)encodeWithCoder:(id)coder;	// 0x3032cecd
// declared property getter: - (BOOL)explicit;	// 0x3032cdf5
// declared property getter: - (id)list;	// 0x300884a1
// declared property getter: - (id)name;	// 0x3032ce05
// declared property setter: - (void)setExplicit:(BOOL)anExplicit;	// 0x30159029
// declared property setter: - (void)setName:(id)name;	// 0x3032d1dd
@end


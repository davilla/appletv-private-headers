/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "UIKit-Structs.h"

@class NSString, NSMutableArray, NSArray;

@interface UIKBIdentifierList : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	NSMutableArray *m_list;	// 8 = 0x8
	BOOL m_explicitlySpecified;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x33ca893d; 
@property(assign, nonatomic) BOOL explicitlySpecified;	// G=0x33ca89d9; S=0x33ca89e9; @synthesize=m_explicitlySpecified
@property(readonly, assign, nonatomic) NSArray *list;	// G=0x33ca89c9; @synthesize=m_list
@property(copy, nonatomic) NSString *name;	// G=0x33ca8995; S=0x33ca89a5; @synthesize=m_name
- (id)init;	// 0x33ca84c5
- (id)initWithCoder:(id)coder;	// 0x33ca8589
- (void)addIdentifier:(id)identifier;	// 0x33ca895d
- (id)copyWithZone:(NSZone *)zone;	// 0x33ca86a9
// declared property getter: - (unsigned)count;	// 0x33ca893d
- (void)dealloc;	// 0x33ca8529
- (id)description;	// 0x33ca8759
- (void)encodeWithCoder:(id)coder;	// 0x33ca8629
// declared property getter: - (BOOL)explicitlySpecified;	// 0x33ca89d9
// declared property getter: - (id)list;	// 0x33ca89c9
// declared property getter: - (id)name;	// 0x33ca8995
// declared property setter: - (void)setExplicitlySpecified:(BOOL)specified;	// 0x33ca89e9
// declared property setter: - (void)setName:(id)name;	// 0x33ca89a5
@end


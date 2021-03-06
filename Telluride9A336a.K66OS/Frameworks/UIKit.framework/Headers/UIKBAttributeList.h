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

@class NSDictionary, NSString, NSMutableDictionary, NSArray;

@interface UIKBAttributeList : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	NSMutableDictionary *m_dict;	// 8 = 0x8
	BOOL m_explicitlySpecified;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x353b588d; 
@property(readonly, assign, nonatomic) NSDictionary *dict;	// G=0x353b5b71; @synthesize=m_dict
@property(assign, nonatomic) BOOL explicitlySpecified;	// G=0x353b5b81; S=0x353b5b91; @synthesize=m_explicitlySpecified
@property(copy, nonatomic) NSString *name;	// G=0x353b5b3d; S=0x353b5b4d; @synthesize=m_name
@property(readonly, assign, nonatomic) NSArray *names;	// G=0x353b586d; 
- (id)init;	// 0x353b5345
- (id)initWithCoder:(id)coder;	// 0x353b5461
- (id)initWithDictionary:(id)dictionary;	// 0x353b53a9
- (id)arrayValueForName:(id)name;	// 0x353b5ae9
- (BOOL)boolValueForName:(id)name;	// 0x353b5a51
- (id)copyWithZone:(NSZone *)zone;	// 0x353b5581
// declared property getter: - (unsigned)count;	// 0x353b588d
- (void)dealloc;	// 0x353b5401
- (id)description;	// 0x353b5631
// declared property getter: - (id)dict;	// 0x353b5b71
- (void)encodeWithCoder:(id)coder;	// 0x353b5501
// declared property getter: - (BOOL)explicitlySpecified;	// 0x353b5b81
- (int)intValueForName:(id)name;	// 0x353b5a9d
- (void)mergeAttributes:(id)attributes;	// 0x353b5991
// declared property getter: - (id)name;	// 0x353b5b3d
// declared property getter: - (id)names;	// 0x353b586d
- (void)setBoolValueForName:(BOOL)name forName:(id)name2;	// 0x353b5911
// declared property setter: - (void)setExplicitlySpecified:(BOOL)specified;	// 0x353b5b91
- (void)setIntValueForName:(int)name forName:(id)name2;	// 0x353b5951
// declared property setter: - (void)setName:(id)name;	// 0x353b5b4d
- (void)setValue:(id)value forName:(id)name;	// 0x353b58ad
- (id)stringValueForName:(id)name;	// 0x353b59fd
- (id)valueForName:(id)name;	// 0x353b59dd
@end


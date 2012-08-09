/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString;
@protocol NSObject;

@interface MSCriterion : NSObject <NSCoding> {
	NSString *_type;	// 4 = 0x4
	NSString *_qualifier;	// 8 = 0x8
	id<NSObject> _criteria;	// 12 = 0xc
}
@property(readonly, retain) NSString *qualifier;	// G=0x3686beb1; converted property
@property(readonly, retain) NSString *type;	// G=0x3686bea1; converted property
- (id)init;	// 0x3686b5e1
- (id)initWithCoder:(id)coder;	// 0x3686baed
- (id)initWithCriteria:(id)criteria allRequired:(BOOL)required;	// 0x3686ba79
- (id)initWithType:(id)type qualifier:(id)qualifier expression:(id)expression;	// 0x3686ba1d
- (id)_initWithType:(id)type qualifier:(id)qualifier criteria:(id)criteria;	// 0x3686b5f9
- (id)criteria;	// 0x3686bec1
- (void)dealloc;	// 0x3686b959
- (id)description;	// 0x3686b9a5
- (void)encodeWithCoder:(id)coder;	// 0x3686bdbd
// converted property getter: - (id)qualifier;	// 0x3686beb1
// converted property getter: - (id)type;	// 0x3686bea1
@end

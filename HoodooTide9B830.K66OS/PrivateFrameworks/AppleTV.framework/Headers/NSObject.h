/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, ATVBindingAdaptor, NSString;

@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
- (id)debugDescription;
- (id)description;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isKindOfClass:(Class)aClass;
- (BOOL)isMemberOfClass:(Class)aClass;
- (BOOL)isProxy;
- (id)performSelector:(SEL)selector;
- (id)performSelector:(SEL)selector withObject:(id)object;
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)retain;
- (unsigned)retainCount;
- (id)self;
- (Class)superclass;
- (NSZone *)zone;
@end

@interface NSObject (Accessibility)
@property(readonly, assign, nonatomic) NSArray *accessibilityControls;	// G=0x32981bbd; 
@property(retain) id accessibilityLabel;	// G=0x32981be9; S=0x32981bd9; converted property
@property(copy, nonatomic) NSString *accessibilityLanguage;	// G=0x32981b9d; S=0x32981bad; 
@property(readonly, assign, nonatomic) BOOL accessibilityOutputsRangeForChildren;	// G=0x32981c09; 
// declared property getter: - (id)accessibilityControls;	// 0x32981bbd
- (float)accessibilityDelayForScreenContent;	// 0x32981b8d
- (BOOL)accessibilityElementIsHidden;	// 0x32981b95
// converted property getter: - (id)accessibilityLabel;	// 0x32981be9
// declared property getter: - (id)accessibilityLanguage;	// 0x32981b9d
- (id)accessibilityNonFocusableElements;	// 0x32981b89
// declared property getter: - (BOOL)accessibilityOutputsRangeForChildren;	// 0x32981c09
- (id)accessibilityScreenContent;	// 0x32981c05
- (id)accessibilitySecondaryLabel;	// 0x32981c01
- (id)accessibilityTraits;	// 0x32981b99
- (id)accessibilityValue;	// 0x32981bf9
- (BOOL)isAccessibilityElement;	// 0x32981bfd
// converted property setter: - (void)setAccessibilityLabel:(id)label;	// 0x32981bd9
// declared property setter: - (void)setAccessibilityLanguage:(id)language;	// 0x32981bad
@end

@interface NSObject (IsMediaAsset)
- (BOOL)isMediaAsset;	// 0x32a67909
@end

@interface NSObject (BRDisplayString)
- (id)displayString;	// 0x32aa05c5
@end

@interface NSObject (BRObjectAdditions)
- (void)attachDeallocationBlock:(id)block;	// 0x32ab19dd
- (void)registerEndOfEventSelector:(SEL)eventSelector;	// 0x32ab19fd
@end

@interface NSObject (ATVKeyValueCodingAdditions)
- (id)arrayValueForKey:(id)key;	// 0x32ab2105
@end

@interface NSObject (ATVBindingAdaptorAccess)
@property(readonly, assign) ATVBindingAdaptor *bindingAdaptor;	// G=0x32b24ca9; 
- (id)_bindingAdaptor;	// 0x32b24c99
// declared property getter: - (id)bindingAdaptor;	// 0x32b24ca9
- (void)releaseBindingAdaptor;	// 0x32b24d21
@end

@interface NSObject (ATVBindingUtilities)
- (void)bind:(id)bind toObject:(id)object withKeyPath:(id)keyPath options:(id)options;	// 0x32b24e7d
- (id)infoForBinding:(id)binding;	// 0x32b25001
- (void)unbind:(id)unbind;	// 0x32b24f81
- (void)updateBoundValueForBinding:(id)binding;	// 0x32b24d65
@end

@interface NSObject (ATVAutounbinderAccess)
- (id)_autounbinder;	// 0x32b25089
- (void)_setAutounbinder:(id)autounbinder;	// 0x32b25099
@end

@interface NSObject (ISInvocationAdditions)
- (id)blockingMainThreadProxy;	// 0x32b5fbc9
- (id)delayedProxy:(double)proxy;	// 0x32b5fc29
- (id)mainThreadProxy;	// 0x32b5fc91
@end

@interface NSObject (NSObject_SBJsonWriting)
- (id)JSONRepresentation;	// 0x32c43ad1
@end

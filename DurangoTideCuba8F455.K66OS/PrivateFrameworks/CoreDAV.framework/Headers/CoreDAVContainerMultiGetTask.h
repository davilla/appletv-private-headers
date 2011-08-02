/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSSet, NSString;
@protocol CoreDAVContainerMultiGetTaskDelegate;

@interface CoreDAVContainerMultiGetTask : CoreDAVTask {
	NSSet *_urls;	// 104 = 0x68
	NSString *_appSpecificNamespace;	// 108 = 0x6c
	NSString *_appSpecificMultiGetNameSpace;	// 112 = 0x70
	NSString *_appSpecificMultiGetCommand;	// 116 = 0x74
	NSString *_appSpecificDataProp;	// 120 = 0x78
	Class _appSpecificDataItemClass;	// 124 = 0x7c
	BOOL _shouldIgnoreResponseErrors;	// 128 = 0x80
	NSSet *_additionalPropElements;	// 132 = 0x84
}
@property(retain) NSSet *additionalPropElements;	// G=0x3317513d; S=0x33175155; @synthesize=_additionalPropElements
@property(assign, nonatomic) id<CoreDAVContainerMultiGetTaskDelegate> delegate;	// @dynamic
@property(assign, nonatomic) BOOL shouldIgnoreResponseErrors;	// G=0x33174631; S=0x33174641; @synthesize=_shouldIgnoreResponseErrors
- (id)initWithURLs:(id)urls atContainerURL:(id)containerURL appSpecificDataItemClass:(Class)aClass;	// 0x331748d9
// declared property getter: - (id)additionalPropElements;	// 0x3317513d
- (id)copyAdditionalPropElements;	// 0x3317461d
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x33174651
- (void)dealloc;	// 0x3317487d
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x33174a15
- (id)httpMethod;	// 0x33174625
- (id)requestBody;	// 0x33174e15
// declared property setter: - (void)setAdditionalPropElements:(id)elements;	// 0x33175155
- (void)setAdditionalProperties:(id)properties onDataItem:(id)item;	// 0x33174621
// declared property setter: - (void)setShouldIgnoreResponseErrors:(BOOL)ignoreResponseErrors;	// 0x33174641
// declared property getter: - (BOOL)shouldIgnoreResponseErrors;	// 0x33174631
@end


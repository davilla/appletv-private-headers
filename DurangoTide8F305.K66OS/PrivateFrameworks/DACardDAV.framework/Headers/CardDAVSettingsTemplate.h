/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
 */

#import <DASettingsTemplate.h> // Unknown library

@class NSArray;

@interface CardDAVSettingsTemplate : DASettingsTemplate {
	NSArray *_additionalPathsToAutodiscover;	// 44 = 0x2c
}
@property(retain, nonatomic) NSArray *additionalPathsToAutodiscover;	// G=0x348252ad; S=0x34825405; @synthesize=_additionalPathsToAutodiscover
+ (id)appleTemplate;	// 0x348252bd
+ (id)defaultTemplate;	// 0x348252e5
+ (id)knownTemplates;	// 0x3482542d
+ (BOOL)requiresPathFormat;	// 0x3482529d
+ (BOOL)requiresPorts;	// 0x348252a1
- (void)initAccount:(id)account;	// 0x3482530d
- (id)_initWithName:(id)name plist:(id)plist;	// 0x348253a5
- (void)_setPrincipalURLForAccount:(id)account;	// 0x348252a5
// declared property getter: - (id)additionalPathsToAutodiscover;	// 0x348252ad
- (void)dealloc;	// 0x3482535d
// declared property setter: - (void)setAdditionalPathsToAutodiscover:(id)autodiscover;	// 0x34825405
- (void)setPrincipalURLForAccount:(id)account toURL:(id)url;	// 0x348252a9
@end


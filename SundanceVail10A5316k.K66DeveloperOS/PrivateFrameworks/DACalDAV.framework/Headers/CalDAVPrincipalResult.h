/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSMutableArray, NSString;

@interface CalDAVPrincipalResult : NSObject {
	NSString *_firstName;	// 4 = 0x4
	NSString *_lastName;	// 8 = 0x8
	NSString *_displayName;	// 12 = 0xc
	NSString *_type;	// 16 = 0x10
	NSString *_principal;	// 20 = 0x14
	NSMutableArray *_emails;	// 24 = 0x18
	NSMutableArray *_cuAddresses;	// 28 = 0x1c
}
@property(retain) NSArray *cuAddresses;	// G=0x3417a329; S=0x3417a33d; @synthesize=_cuAddresses
@property(retain) NSString *displayName;	// G=0x3417a299; S=0x3417a2ad; @synthesize=_displayName
@property(readonly, assign) NSString *emailAddress;	// G=0x3417a08d; 
@property(retain) NSArray *emailAddresses;	// G=0x3417a2e1; S=0x3417a2f5; @synthesize=_emails
@property(retain) NSString *firstName;	// G=0x3417a251; S=0x3417a265; @synthesize=_firstName
@property(retain) NSString *lastName;	// G=0x3417a275; S=0x3417a289; @synthesize=_lastName
@property(readonly, assign) NSString *preferredCUAddress;	// G=0x34179f3d; 
@property(retain) NSString *principalPath;	// G=0x3417a305; S=0x3417a319; @synthesize=_principal
@property(retain) NSString *resultType;	// G=0x3417a2bd; S=0x3417a2d1; @synthesize=_type
+ (id)resultFromResponse:(id)response;	// 0x34179e6d
- (id)init;	// 0x34179841
- (id)initWithResponse:(id)response;	// 0x34179a09
- (void)addCUAddress:(id)address;	// 0x34179eb5
- (void)addEmail:(id)email;	// 0x34179ef9
- (id)convertToDAContactSearchResultElement;	// 0x34156c99
// declared property getter: - (id)cuAddresses;	// 0x3417a329
- (void)dealloc;	// 0x34179941
- (id)description;	// 0x3417a1b5
// declared property getter: - (id)displayName;	// 0x3417a299
// declared property getter: - (id)emailAddress;	// 0x3417a08d
// declared property getter: - (id)emailAddresses;	// 0x3417a2e1
// declared property getter: - (id)firstName;	// 0x3417a251
// declared property getter: - (id)lastName;	// 0x3417a275
// declared property getter: - (id)preferredCUAddress;	// 0x34179f3d
// declared property getter: - (id)principalPath;	// 0x3417a305
// declared property getter: - (id)resultType;	// 0x3417a2bd
// declared property setter: - (void)setCuAddresses:(id)addresses;	// 0x3417a33d
// declared property setter: - (void)setDisplayName:(id)name;	// 0x3417a2ad
// declared property setter: - (void)setEmailAddresses:(id)addresses;	// 0x3417a2f5
// declared property setter: - (void)setFirstName:(id)name;	// 0x3417a265
// declared property setter: - (void)setLastName:(id)name;	// 0x3417a289
// declared property setter: - (void)setPrincipalPath:(id)path;	// 0x3417a319
// declared property setter: - (void)setResultType:(id)type;	// 0x3417a2d1
@end

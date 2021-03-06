//
//  ReaderSettings.h
//  Reader v2.6.0
//
//  Created by Felipe Lobo on 29/05/13.
//	Copyright © 2013 Flip Studio. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ReaderSettings : NSObject

@property (nonatomic, assign) BOOL standalone;
@property (nonatomic, assign, getter = hasFlatUI) BOOL flatUI;
@property (nonatomic, assign, getter = hasBookmarking) BOOL bookmarking;
@property (nonatomic, assign, getter = isMailEnabled) BOOL mailEnabled;
@property (nonatomic, assign, getter = areThumbsEnabled) BOOL thumbsEnabled;
@property (nonatomic, assign, getter = isIdleTimeDisabled) BOOL idleTimeDisabled;
@property (nonatomic, assign, getter = isPreviewEnabled) BOOL previewEnabled;
@property (nonatomic, assign, getter = shouldShowShadows) BOOL showShadows;
@property (nonatomic, assign, getter = isRetinaDisabled) BOOL retinaDisabled;
@property (nonatomic, assign, getter = shouldShowMainToolbar) BOOL showMainToolbar;
@property (nonatomic, assign, getter = shouldShowMainPagebar) BOOL showMainPagebar;

+ (ReaderSettings *)defaultSettings;

@end

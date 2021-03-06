//
//  SGAppDelegate.h
//  Slide
//
//  Created by Varun Santhanam on 3/18/14.
//  Copyright (c) 2014 Varun Santhanam. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SGAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

- (void)iCloudAvailabilityChanged;
- (void)storeDidChange:(NSUbiquitousKeyValueStore *)store;

@end

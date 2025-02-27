<?php

/**
 * @file
 * Uses best practices to check for pre-launch best practices.
 */

/**
 * Generates and returns section 9 for launch_checklist.
 */
function section_09_database($checklist_routes) {

  return [
    // Section 9 Database.
    '#title' => t('Database'),
    '#description' => t('<p>Database settings for the Drupal site.</p>'),
    'database_backup' => [
      '#title' => t('Database Backups'),
      '#description' => t('Ensure that a daily scheduled database backup has been created and that it is saving at least 7 days worth of backups, but not unlimited backups.'),
    ],
    'daily_backup' => [
      '#title' => t('Daily Backup'),
      '#description' => t('Manually test the daily backup to ensure that the backup is generated and saved successfully. Check that the daily backup is running successfully when cron runs.'),
    ],
    'aes_module' => [
      '#title' => t('RealAES Module'),
      '#description' => t('For sites that contain sensitive data, ensure that the Real AES module is installed and backups are encrypted.'),
      'handbook_page' => [
        '#text' => t('Real AES module'),
        '#url' => $checklist_routes["real_aes"],
      ],
    ],
    'private_files_directory' => [
      '#title' => t('Private Files Directory'),
      '#description' => t('Check that the Private files directory is actually outside of the document root (eg. outside the public_html folder).'),
    ],
  ];
}

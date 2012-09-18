<?php
/**
 * @file
 * pro_101_permissions_wrap.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pro_101_permissions_wrap_user_default_permissions() {
  $permissions = array();

  // Exported permission: access workbench.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      0 => 'assistant',
      1 => 'authenticated user',
      2 => 'developer',
      3 => 'professional',
      4 => 'support',
    ),
    'module' => 'workbench',
  );

  // Exported permission: administer workbench.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'workbench',
  );

  // Exported permission: administer workbench moderation.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: bypass workbench moderation.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from draft to needs_review.
  $permissions['moderate content from draft to needs_review'] = array(
    'name' => 'moderate content from draft to needs_review',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from draft to trash.
  $permissions['moderate content from draft to trash'] = array(
    'name' => 'moderate content from draft to trash',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from needs_review to draft.
  $permissions['moderate content from needs_review to draft'] = array(
    'name' => 'moderate content from needs_review to draft',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from needs_review to published.
  $permissions['moderate content from needs_review to published'] = array(
    'name' => 'moderate content from needs_review to published',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from published to unpublished.
  $permissions['moderate content from published to unpublished'] = array(
    'name' => 'moderate content from published to unpublished',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from trash to draft.
  $permissions['moderate content from trash to draft'] = array(
    'name' => 'moderate content from trash to draft',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from trash to needs_review.
  $permissions['moderate content from trash to needs_review'] = array(
    'name' => 'moderate content from trash to needs_review',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from trash to published.
  $permissions['moderate content from trash to published'] = array(
    'name' => 'moderate content from trash to published',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from unpublished to draft.
  $permissions['moderate content from unpublished to draft'] = array(
    'name' => 'moderate content from unpublished to draft',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from unpublished to needs_review.
  $permissions['moderate content from unpublished to needs_review'] = array(
    'name' => 'moderate content from unpublished to needs_review',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from unpublished to trash.
  $permissions['moderate content from unpublished to trash'] = array(
    'name' => 'moderate content from unpublished to trash',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: use workbench_moderation my drafts tab.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: use workbench_moderation needs review tab.
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view all unpublished content.
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view moderation history.
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view moderation messages.
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'workbench_moderation',
  );

  return $permissions;
}
